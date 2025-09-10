namespace impleCalculatorMauiApp
{
    public partial class MainPage : ContentPage
    {
        int count = 0;

        public MainPage()
        {
            InitializeComponent();
        }

        private void OnCounterClicked(object? sender, EventArgs e)
        {
            if (!int.TryParse(firstNumberEntry.Text, out int firstNumber)
                || !int.TryParse(secondNumberEntry.Text, out int secondNumber))
                return;
            int result = firstNumber + secondNumber;
            resultLabel.Text = $"Wynik to {result}";
               
        }
    }
}
