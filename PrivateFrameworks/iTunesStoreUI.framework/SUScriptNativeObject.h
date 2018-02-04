/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptNativeObject : NSObject {
    NSLock * _lock;
    id  _nativeObject;
    SUScriptObject * _scriptObject;
    bool  _weak;
}

@property (nonatomic) id object;
@property SUScriptObject *scriptObject;

+ (void)clearWeakReferencesToObject:(id)arg1;
+ (void)makeReferencesToObjectWeak:(id)arg1;
+ (id)objectWithNativeObject:(id)arg1;

- (void)_nativeObjectBecameWeakNotification:(id)arg1;
- (void)dealloc;
- (void)destroyNativeObject;
- (id)init;
- (void)lock;
- (id)object;
- (id)scriptObject;
- (void)setObject:(id)arg1;
- (void)setScriptObject:(id)arg1;
- (void)setupNativeObject;
- (void)unlock;

@end
