/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INVocabularyConnection : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    <INIntentPreferencesAndVocabularyUpdateService> * _remoteObjectProxy;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)_clearConnection;
- (id)_connection;
- (id)_syncService;
- (void)dealloc;
- (id)init;
- (id)settingsService;

@end
