// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Threading.IThreadPoolWorkItem
#include "System/Threading/IThreadPoolWorkItem.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: ITaskCompletionAction
  class ITaskCompletionAction;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ThreadAbortException
  class ThreadAbortException;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.CompletionActionInvoker
  class CompletionActionInvoker : public ::Il2CppObject, public System::Threading::IThreadPoolWorkItem {
    public:
    // private readonly System.Threading.Tasks.ITaskCompletionAction m_action
    // Offset: 0x10
    System::Threading::Tasks::ITaskCompletionAction* m_action;
    // private readonly System.Threading.Tasks.Task m_completingTask
    // Offset: 0x18
    System::Threading::Tasks::Task* m_completingTask;
    // System.Void .ctor(System.Threading.Tasks.ITaskCompletionAction action, System.Threading.Tasks.Task completingTask)
    // Offset: 0xCC8B4C
    static CompletionActionInvoker* New_ctor(System::Threading::Tasks::ITaskCompletionAction* action, System::Threading::Tasks::Task* completingTask);
    // public System.Void ExecuteWorkItem()
    // Offset: 0xCC8B9C
    // Implemented from: System.Threading.IThreadPoolWorkItem
    // Base method: System.Void IThreadPoolWorkItem::ExecuteWorkItem()
    void ExecuteWorkItem();
    // Creating proxy method: System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
    // Maps to method: ExecuteWorkItem
    void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
    // public System.Void MarkAborted(System.Threading.ThreadAbortException tae)
    // Offset: 0xCC8C54
    // Implemented from: System.Threading.IThreadPoolWorkItem
    // Base method: System.Void IThreadPoolWorkItem::MarkAborted(System.Threading.ThreadAbortException tae)
    void MarkAborted(System::Threading::ThreadAbortException* tae);
    // Creating proxy method: System_Threading_IThreadPoolWorkItem_MarkAborted
    // Maps to method: MarkAborted
    void System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException* tae);
  }; // System.Threading.Tasks.CompletionActionInvoker
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::CompletionActionInvoker*, "System.Threading.Tasks", "CompletionActionInvoker");
#pragma pack(pop)
