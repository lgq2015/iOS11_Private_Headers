/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPReleaseInfo : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SACalendar *releaseDate;
@property (nonatomic) long long releaseYear;
@property (readonly) Class superclass;

+ (id)releaseInfo;
+ (id)releaseInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)releaseDate;
- (long long)releaseYear;
- (void)setReleaseDate:(id)arg1;
- (void)setReleaseYear:(long long)arg1;

@end
