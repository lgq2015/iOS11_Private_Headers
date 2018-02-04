/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMTunesController : NSObject {
    NSDate * _lastChange;
    NSDictionary * _lastInfo;
    NSMutableArray * _listeners;
    NSString * _messageFormat;
    NSMutableDictionary * _playerInfo;
}

@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) NSString *messageFormat;
@property (nonatomic) NSMutableDictionary *playerInfo;

+ (id)sharedTunesController;

- (void)_playerChanged:(id)arg1;
- (void)_playerChangedNotification:(id)arg1;
- (void)_updateMessage;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isEnabled;
- (id)messageFormat;
- (id)playerInfo;
- (void)removeListener:(id)arg1;
- (void)setPlayerInfo:(id)arg1;

@end
