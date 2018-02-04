/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSManagedObject : NSObject {
    IKAppContext * _appContext;
    JSManagedValue * _managedValue;
    id  _object;
    id  _owner;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) id owner;

- (void).cxx_destruct;
- (id)appContext;
- (void)dealloc;
- (id)init;
- (id)initWithObject:(id)arg1 owner:(id)arg2 appContext:(id)arg3;
- (id)object;
- (id)owner;

@end
