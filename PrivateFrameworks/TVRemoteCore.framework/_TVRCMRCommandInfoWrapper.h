/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCMRCommandInfoWrapper : NSObject {
    struct _MRMediaRemoteCommandInfo { } * _info;
}

@property (nonatomic, readonly) unsigned int command;
@property (nonatomic, readonly, copy) NSString *commandDescription;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;

- (unsigned int)command;
- (id)commandDescription;
- (void)dealloc;
- (id)description;
- (id)initWithCommandInfo:(struct _MRMediaRemoteCommandInfo { }*)arg1;
- (bool)isEnabled;

@end
