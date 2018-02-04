/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

@interface _NAObserverProxy : NSObject {
    bool  _valid;
    id  _weakObserver;
}

@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic, readonly) id weakObserver;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWeakObserver:(id)arg1;
- (void)invalidate;
- (bool)isValid;
- (id)weakObserver;

@end
