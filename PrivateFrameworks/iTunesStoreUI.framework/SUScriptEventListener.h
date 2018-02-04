/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptEventListener : NSObject {
    WebScriptObject * _callback;
    NSLock * _lock;
    NSString * _name;
    bool  _useCapture;
}

@property (retain) WebScriptObject *callback;
@property (copy) NSString *name;
@property bool shouldUseCapture;

- (id)callback;
- (void)dealloc;
- (id)init;
- (id)name;
- (void)setCallback:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShouldUseCapture:(bool)arg1;
- (bool)shouldUseCapture;

@end
