/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUTSTvShow : SAUTSContent

@property (nonatomic, copy) NSString *seriesName;

+ (id)tvShow;
+ (id)tvShowWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)seriesName;
- (void)setSeriesName:(id)arg1;

@end
