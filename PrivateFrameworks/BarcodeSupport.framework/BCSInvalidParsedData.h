/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSInvalidParsedData : NSObject <BCSParsedDataPrivate> {
    NSString * _invalidContents;
    long long  _invalidDataType;
    NSString * _invalidURLScheme;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *extraPreviewText;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *invalidContents;
@property (nonatomic, readonly) long long invalidDataType;
@property (nonatomic, copy) NSString *invalidURLScheme;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)extraPreviewText;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvalidDataType:(long long)arg1 invalidContents:(id)arg2;
- (id)invalidContents;
- (long long)invalidDataType;
- (id)invalidURLScheme;
- (void)setInvalidContents:(id)arg1;
- (void)setInvalidURLScheme:(id)arg1;
- (long long)type;

@end
