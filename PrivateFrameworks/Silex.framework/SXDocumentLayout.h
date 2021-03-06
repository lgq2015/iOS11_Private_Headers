/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDocumentLayout : SXJSONObject

@property (nonatomic, readonly) unsigned long long columns;
@property (nonatomic, readonly) long long gutter;
@property (nonatomic, readonly) long long margin;
@property (nonatomic, readonly) long long width;

- (long long)gutterWithValue:(id)arg1 withType:(int)arg2;

@end
