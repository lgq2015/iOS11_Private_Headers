/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchPhoto : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *fullsize;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSURL *largeSize;
@property (nonatomic, copy) NSURL *maximumSize;
@property (nonatomic, retain) SAUIAppPunchOut *photoPunchOut;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *thumbnail;

+ (id)photo;
+ (id)photoWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)fullsize;
- (id)groupIdentifier;
- (id)identifier;
- (id)largeSize;
- (id)maximumSize;
- (id)photoPunchOut;
- (void)setFullsize:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLargeSize:(id)arg1;
- (void)setMaximumSize:(id)arg1;
- (void)setPhotoPunchOut:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;

@end
