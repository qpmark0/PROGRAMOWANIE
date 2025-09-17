using BindingCalculatorMauiApp.Models;
using BindingCalculatorMauiApp.PageModels;

namespace BindingCalculatorMauiApp.Pages
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