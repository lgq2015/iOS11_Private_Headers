/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKSwipeTransitionController : NSObject <_UINavigationInteractiveTransitionBaseDelegate> {
    struct RetainPtr<_UINavigationInteractiveTransitionBase> { 
        void *m_ptr; 
    }  _backTransitionController;
    struct RetainPtr<_UINavigationInteractiveTransitionBase> { 
        void *m_ptr; 
    }  _forwardTransitionController;
    struct ViewGestureController { int (**x1)(); struct WebPageProxy {} *x2; int x3; struct Timer<WebKit::ViewGestureController> { int (**x_4_1_1)(); struct Ref<WTF::RunLoop> { struct RunLoop {} *x_2_2_1; } x_4_1_2; struct RetainPtr<__CFRunLoopTimer *> { void *x_3_2_1; } x_4_1_3; struct ViewGestureController {} *x_4_1_4; } x4; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_5_1_1; } x5; struct WeakPtr<WebKit::WebPageProxy> { struct Ref<WTF::WeakReference<WebKit::WebPageProxy> > { struct WeakReference<WebKit::WebPageProxy> {} *x_1_2_1; } x_6_1_1; } x6; struct RefPtr<WebKit::WebPageProxy> { struct WebPageProxy {} *x_7_1_1; } x7; unsigned long long x8; id x9; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x10; void*x11; void*x12; void*x13; int x14; in void*x15; void*x16; const void*x17; void*x18; unsigned int x19; oneway int x20; void*x21; void*x22; void*x23; void*x24; void *x25; } * _gestureController;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<UIView>="m_weakReference"@}' */ struct WeakObjCPtr<UIView> { 
        id m_weakReference; 
    }  _gestureRecognizerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)directionForTransition:(id)arg1;
- (id)gestureRecognizerForInteractiveTransition:(id)arg1 WithTarget:(id)arg2 action:(SEL)arg3;
- (id)initWithViewGestureController:(struct ViewGestureController { int (**x1)(); struct WebPageProxy {} *x2; int x3; struct Timer<WebKit::ViewGestureController> { int (**x_4_1_1)(); struct Ref<WTF::RunLoop> { struct RunLoop {} *x_2_2_1; } x_4_1_2; struct RetainPtr<__CFRunLoopTimer *> { void *x_3_2_1; } x_4_1_3; struct ViewGestureController {} *x_4_1_4; } x4; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_5_1_1; } x5; struct WeakPtr<WebKit::WebPageProxy> { struct Ref<WTF::WeakReference<WebKit::WebPageProxy> > { struct WeakReference<WebKit::WebPageProxy> {} *x_1_2_1; } x_6_1_1; } x6; struct RefPtr<WebKit::WebPageProxy> { struct WebPageProxy {} *x_7_1_1; } x7; unsigned long long x8; id x9; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x10; void*x11; void*x12; void*x13; int x14; in void*x15; void*x16; const void*x17; void*x18; unsigned int x19; oneway int x20; void*x21; void*x22; void*x23; void*x24; void *x25; }*)arg1 gestureRecognizerView:(id)arg2;
- (bool)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (bool)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg3;
- (void)invalidate;
- (bool)isNavigationSwipeGestureRecognizer:(id)arg1;
- (bool)shouldBeginInteractiveTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;

@end
