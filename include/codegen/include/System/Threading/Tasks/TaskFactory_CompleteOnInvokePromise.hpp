// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.Tasks.TaskFactory
#include "System/Threading/Tasks/TaskFactory.hpp"
// Including type: System.Threading.Tasks.ITaskCompletionAction
#include "System/Threading/Tasks/ITaskCompletionAction.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Skipping declaration: Task because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise
  class TaskFactory::CompleteOnInvokePromise : public System::Threading::Tasks::Task_1<System::Threading::Tasks::Task*>, public System::Threading::Tasks::ITaskCompletionAction {
    public:
    // private System.Collections.Generic.IList`1<System.Threading.Tasks.Task> _tasks
    // Offset: 0x58
    System::Collections::Generic::IList_1<System::Threading::Tasks::Task*>* tasks;
    // private System.Int32 m_firstTaskAlreadyCompleted
    // Offset: 0x60
    int m_firstTaskAlreadyCompleted;
    // public System.Void .ctor(System.Collections.Generic.IList`1<System.Threading.Tasks.Task> tasks)
    // Offset: 0xCD1B64
    static TaskFactory::CompleteOnInvokePromise* New_ctor(System::Collections::Generic::IList_1<System::Threading::Tasks::Task*>* tasks);
    // public System.Void Invoke(System.Threading.Tasks.Task completingTask)
    // Offset: 0xCD1C4C
    // Implemented from: System.Threading.Tasks.ITaskCompletionAction
    // Base method: System.Void ITaskCompletionAction::Invoke(System.Threading.Tasks.Task completingTask)
    void Invoke(System::Threading::Tasks::Task* completingTask);
    // Creating proxy method: System_Threading_Tasks_ITaskCompletionAction_Invoke
    // Maps to method: Invoke
    void System_Threading_Tasks_ITaskCompletionAction_Invoke(System::Threading::Tasks::Task* completingTask);
  }; // System.Threading.Tasks.TaskFactory/CompleteOnInvokePromise
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskFactory::CompleteOnInvokePromise*, "System.Threading.Tasks", "TaskFactory/CompleteOnInvokePromise");
#pragma pack(pop)
