/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPMediaEntity : SADomainObject

@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, copy) NSString *releaseDate;
@property (nonatomic, copy) NSString *sortTitle;
@property (nonatomic, copy) NSString *title;

+ (id)mediaEntity;
+ (id)mediaEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mediaType;
- (id)releaseDate;
- (void)setMediaType:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setSortTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sortTitle;
- (id)title;

@end
