/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsNewsItem : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *link;
@property (nonatomic, copy) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)newsItem;
+ (id)newsItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)link;
- (void)setLink:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)summary;
- (id)title;

@end
