/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMPluginPayload : NSObject <NSCopying, NSSecureCoding> {
    NSString * _associatedMessageGUID;
    NSArray * _attachments;
    NSString * _breadcrumbText;
    NSArray * _consumedSessionPayloads;
    NSData * _data;
    DDScannerResult * _dataDetectedResult;
    IMBalloonPluginDataSource * _datasource;
    bool  _isFromMe;
    bool  _isPlayed;
    NSString * _messageGUID;
    NSString * _pluginBundleID;
    NSString * _pluginSessionGUID;
    NSString * _sender;
    bool  _shouldExpire;
    NSString * _statusText;
    bool  _sticker;
    NSAttributedString * _text;
    bool  _update;
    NSURL * _url;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSString *associatedMessageGUID;
@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic, retain) NSString *breadcrumbText;
@property (nonatomic, retain) NSArray *consumedSessionPayloads;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) DDScannerResult *dataDetectedResult;
@property (nonatomic) IMBalloonPluginDataSource *datasource;
@property (nonatomic) bool isFromMe;
@property (nonatomic) bool isPlayed;
@property (nonatomic, retain) NSString *messageGUID;
@property (nonatomic, retain) NSString *pluginBundleID;
@property (nonatomic, retain) NSString *pluginSessionGUID;
@property (nonatomic, copy) NSString *sender;
@property (nonatomic) bool shouldExpire;
@property (nonatomic, readonly) bool shouldHideAttachments;
@property (nonatomic, retain) NSString *statusText;
@property (getter=isSticker, nonatomic) bool sticker;
@property (nonatomic, retain) NSAttributedString *text;
@property (getter=isUpdate, nonatomic) bool update;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAttachmentsFromFileTransferGUIDs:(id)arg1;
- (id)associatedMessageGUID;
- (id)attachments;
- (id)breadcrumbText;
- (id)consumedSessionPayloads;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dataDetectedResult;
- (id)datasource;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (id)initWithMessageItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPluginPayload:(id)arg1;
- (bool)isFromMe;
- (bool)isPlayed;
- (bool)isSticker;
- (bool)isUpdate;
- (id)messageGUID;
- (id)pluginBundleID;
- (id)pluginSessionGUID;
- (id)sender;
- (void)setAssociatedMessageGUID:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setBreadcrumbText:(id)arg1;
- (void)setConsumedSessionPayloads:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDataDetectedResult:(id)arg1;
- (void)setDatasource:(id)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setIsPlayed:(bool)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setPluginBundleID:(id)arg1;
- (void)setPluginSessionGUID:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setShouldExpire:(bool)arg1;
- (void)setStatusText:(id)arg1;
- (void)setSticker:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setUpdate:(bool)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldExpire;
- (bool)shouldHideAttachments;
- (id)statusText;
- (id)text;
- (id)url;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_photoCompositionMediaObjects;
- (id)__ck_photoCompositionString;
- (id)__ck_superFormatStringTransferGUIDs:(id*)arg1 mediaObjects:(id*)arg2;
- (id)cleansedCopy;

@end
