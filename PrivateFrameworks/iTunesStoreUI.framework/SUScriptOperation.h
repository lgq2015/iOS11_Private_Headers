/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptOperation : ISOperation {
    WebScriptObject * _callbackFunction;
    id  _options;
    ISOperation * _wrappedOperation;
}

+ (Class)postOperationClassForType:(id)arg1;
+ (void)registerPostOperationClass:(Class)arg1 forType:(id)arg2;

- (id)_scriptOptions;
- (void)_sendCompletionCallback;
- (void)dealloc;
- (id)initWithOperation:(id)arg1 callback:(id)arg2;
- (id)initWithOperation:(id)arg1 options:(id)arg2;
- (id)initWithPostType:(id)arg1 options:(id)arg2;
- (void)run;
- (void)setScriptOptions:(id)arg1;

@end
