/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMTranscriptPluginBreadcrumbChatItem : IMTranscriptChatItem <IMPluginChatItemProtocol> {
    IMBalloonPluginDataSource * _dataSource;
    unsigned long long  _optionFlags;
    NSString * _rawStatusText;
    NSString * _statusText;
}

@property (nonatomic, retain) IMBalloonPluginDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) unsigned long long optionFlags;
@property (nonatomic, readonly) NSString *rawStatusText;
@property (nonatomic, readonly) NSString *statusText;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSString *type;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 datasource:(id)arg2 statusText:(id)arg3 optionFlags:(unsigned long long)arg4;
- (void)configureStatusTextWithAccount:(id)arg1;
- (id)dataSource;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isFromMe;
- (unsigned long long)optionFlags;
- (id)rawStatusText;
- (void)setDataSource:(id)arg1;
- (id)statusText;
- (id)type;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
