/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarSource : SASource

@property (nonatomic) bool strict;

+ (id)source;
+ (id)sourceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setStrict:(bool)arg1;
- (bool)strict;

@end
