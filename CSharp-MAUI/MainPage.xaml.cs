using static System.Net.Mime.MediaTypeNames;

namespace JogodaVelha
{
    public partial class MainPage : ContentPage
    {


        string vez = "X";
        int resultado = 0, X = 0 ,O = 0;

        public MainPage()
        {
            InitializeComponent();



        }

        private void Button_Clicked(object sender, EventArgs e)
        {
            Button btn = (Button)sender;

            btn.IsEnabled = false;

            btn.Text = vez;

            resultado++;

            if (btn10.Text == vez && btn11.Text == vez && btn12.Text == vez)
                resultado = 10;
            else if (btn20.Text == vez && btn21.Text == vez && btn22.Text == vez)
                resultado = 10;
            else if (btn30.Text == vez && btn31.Text == vez && btn32.Text == vez)
                resultado = 10;
            else if (btn10.Text == vez && btn21.Text == vez && btn32.Text == vez)
                resultado = 10;
            else if (btn30.Text == vez && btn21.Text == vez && btn12.Text == vez)
                resultado = 10;
            else if (btn10.Text == vez && btn20.Text == vez && btn30.Text == vez)
                resultado = 10;
            else if (btn11.Text == vez && btn21.Text == vez && btn31.Text == vez)
                resultado = 10;
            else if (btn12.Text == vez && btn22.Text == vez && btn32.Text == vez)
                resultado = 10;

            if (resultado >= 10  )
            {
                DisplayAlert("Parabéns!", "O " + vez + " ganhou!", "OK");
    


                if (vez == "X")
                {
                    X++;
                }
                else
                {
                    O++;
                }
                teX.Text = "X \n"+X.ToString();
                teO.Text ="O \n" + O.ToString();
                Zerar();
            } 
            else
            {
                if (resultado == 9)
                {
                    DisplayAlert("Fim de jogo", "Empate!", "OK");
                    Zerar();
                }
            }
            if (vez == "X")
            {
                vez = "O";
            }
            else
            {
                vez = "X";
            }


        } 

        void Zerar()
        {
            btn10.Text = "";
            btn11.Text = "";
            btn12.Text = "";

            btn20.Text = "";
            btn21.Text = "";
            btn22.Text = "";

            btn30.Text = "";
            btn31.Text = "";
            btn32.Text = "";

            btn10.IsEnabled = true;
            btn11.IsEnabled = true;
            btn12.IsEnabled = true;

            btn20.IsEnabled = true;
            btn21.IsEnabled = true;
            btn22.IsEnabled = true;

            btn30.IsEnabled = true;
            btn31.IsEnabled = true;
            btn32.IsEnabled = true;

            resultado = 0;
            vez = "X";
        }

    } 
}