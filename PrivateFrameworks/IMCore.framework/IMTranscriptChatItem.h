/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMTranscriptChatItem : IMChatItem {
    unsigned char  _attachmentContiguousType;
    unsigned int  _contiguousLoaded;
    unsigned char  _contiguousType;
    NSString * _guid;
}

@property (nonatomic, readonly) unsigned char attachmentContiguousType;
@property (getter=isContiguous, nonatomic, readonly) bool contiguous;
@property (nonatomic, readonly) unsigned char contiguousType;
@property (setter=_setGUID:, nonatomic, copy) NSString *guid;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (bool)_isContiguousLoaded;
- (void)_setAttachmentContiguousType:(unsigned char)arg1;
- (void)_setContiguousLoaded:(bool)arg1;
- (void)_setContiguousType:(unsigned char)arg1;
- (void)_setGUID:(id)arg1;
- (unsigned char)attachmentContiguousType;
- (unsigned char)contiguousType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)guid;
- (unsigned long long)hash;
- (bool)isAttachmentContiguousWithChatItem:(id)arg1;
- (bool)isContiguous;
- (bool)isContiguousWithChatItem:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
