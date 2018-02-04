/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKAttachment : NSTextAttachment <NSSecureCoding> {
    NSString * _contentId;
    NSString * _fileName;
    unsigned long long  _fileSize;
    NSString * _mimePartNumber;
    unsigned long long  _type;
    NSString * _url;
}

@property (nonatomic, retain) NSString *contentId;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic, retain) NSString *mimePartNumber;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSString *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (unsigned long long)fileSize;
- (id)initWithCoder:(id)arg1;
- (id)mimePartNumber;
- (void)setContentId:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setMimePartNumber:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (unsigned long long)type;
- (id)url;

@end
