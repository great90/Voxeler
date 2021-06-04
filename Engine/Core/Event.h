#include "../Core.hpp"

namespace Voxeler
{
    enum class EventType
    {
        KEY_DOWN_EVENT,
        KEY_UP_EVENT;
        MOUSE_DOWN_EVENT,
        MOUSE_UP_EVENT,
        MOUSE_MOVE_EVENT,
        WINDOW_RESIZE_EVENT,
        WINDOW_CLOSE_EVENT,
        WINDOW_MOVE_EVENT
    };

    // Add get type in your events
    class Event : public PrintableObject
    {
    public:
        Event(EventType id) : id(id) { }
        ~Event() = default;
        
        EventType id;
    };
  
    using EventFn = std::functional<void(Event&)>;
  
    struct EventData
    {
        EventFn eventListener;
    };
  
    class Dispacther
    {
    private:
        Event& e;
    public:
        Dispatcher(Event& e) : e(e) { }
        ~Dispatcher() = default;
        
        temlate<typename eventClass>
        void Dispatch(EventFn fn)
        {
            eventClass* eClass = new eventClass();
            
            if(e == eClass->e)
                fn(*eClass);
        }
    };
}
