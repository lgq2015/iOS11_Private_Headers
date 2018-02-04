/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem <IMMessageChatItem> {
    bool  _actionableEclipsed;
    IMHandle * _sender;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool failed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) long long offerState;
@property (nonatomic, readonly) IMHandle *sender;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *time;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
- (bool)_isActionableEclipsed;
- (void)_setActionableEclipsed:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)failed;
- (bool)isFromMe;
- (long long)offerState;
- (id)sender;
- (id)time;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
