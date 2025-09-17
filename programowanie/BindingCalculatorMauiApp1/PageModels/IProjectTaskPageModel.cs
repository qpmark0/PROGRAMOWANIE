using BindingCalculatorMauiApp1.Models;
using CommunityToolkit.Mvvm.Input;

namespace BindingCalculatorMauiApp1.PageModels
{
    public interface IProjectTaskPageModel
    {
        IAsyncRelayCommand<ProjectTask> NavigateToTaskCommand { get; }
        bool IsBusy { get; }
    }
}