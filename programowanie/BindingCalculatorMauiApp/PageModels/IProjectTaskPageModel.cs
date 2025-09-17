using BindingCalculatorMauiApp.Models;
using CommunityToolkit.Mvvm.Input;

namespace BindingCalculatorMauiApp.PageModels
{
    public interface IProjectTaskPageModel
    {
        IAsyncRelayCommand<ProjectTask> NavigateToTaskCommand { get; }
        bool IsBusy { get; }
    }
}