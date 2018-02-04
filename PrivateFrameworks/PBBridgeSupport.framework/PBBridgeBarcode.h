/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBridgeBarcode : NSObject {
    NSString * _altText;
    int  _format;
    NSData * _messageData;
    NSDictionary * _options;
}

@property (nonatomic, copy) NSString *altText;
@property (nonatomic) int format;
@property (nonatomic, readonly) bool isTall;
@property (nonatomic, copy) NSData *messageData;
@property (nonatomic, copy) NSDictionary *options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_imageFromBarcodeMessage;
- (id)_imageFromTextMessage;
- (id)altText;
- (void)encodeWithCoder:(id)arg1;
- (int)format;
- (id)image;
- (id)initWithBarcodeDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTall;
- (id)messageData;
- (id)options;
- (void)setAltText:(id)arg1;
- (void)setFormat:(int)arg1;
- (void)setMessageData:(id)arg1;
- (void)setOptions:(id)arg1;

@end
