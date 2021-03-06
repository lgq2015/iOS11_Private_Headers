/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarEventSnippet : SAUISnippet

@property (nonatomic, copy) NSArray *events;

+ (id)eventSnippet;
+ (id)eventSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)events;
- (id)groupIdentifier;
- (void)setEvents:(id)arg1;

@end
