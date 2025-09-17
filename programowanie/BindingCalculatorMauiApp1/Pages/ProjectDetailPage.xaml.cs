using BindingCalculatorMauiApp1.Models;

namespace BindingCalculatorMauiApp1.Pages
{
    public partial class ProjectDetailPage : ContentPage
    {
        public ProjectDetailPage(ProjectDetailPageModel model)
        {
            InitializeComponent();

            BindingContext = model;
        }
    }
}
