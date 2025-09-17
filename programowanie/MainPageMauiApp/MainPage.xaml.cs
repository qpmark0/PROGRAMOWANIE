namespace MainPageMauiApp
{
    public partial class MainPage : ContentPage
    {
        public string Message { get; set; }

        public MainPage()
        {
            InitializeComponent();
        }

        private void Slider_ValueChanged(object sender, ValueChangedEventArgs e)
        {
            rotationLabel.Rotation=rotationSlider.Value;
        }

        private void Button_Clicked(object sender, EventArgs e)
        {
            returnMessage= "Ilość to" + Message.Length;
            //OnPropertyChanged("ReturnMessage");
            //OnPropertyChanged(nameof(ReturnMessage));
        }
    }
}
