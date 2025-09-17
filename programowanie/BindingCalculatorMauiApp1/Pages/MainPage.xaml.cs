using BindingCalculatorMauiApp1.Models;
using BindingCalculatorMauiApp1.PageModels;

namespace BindingCalculatorMauiApp1.Pages
{
    public partial class MainPage : ContentPage
    {
        public MainPage(MainPageModel model)
        {
            InitializeComponent();
            BindingContext = model;
        }
    }
}