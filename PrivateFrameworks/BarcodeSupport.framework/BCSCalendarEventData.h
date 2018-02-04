/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSCalendarEventData : NSObject <BCSParsedDataPrivate> {
    NSString * _icsString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *extraPreviewText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *icsString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)extraPreviewText;
- (id)icsString;
- (id)initWithCoder:(id)arg1;
- (id)initWithICSString:(id)arg1;
- (long long)type;

@end
