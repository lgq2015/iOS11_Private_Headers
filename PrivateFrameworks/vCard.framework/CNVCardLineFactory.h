/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardLineFactory : NSObject <CNVCardLineFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)version21LineFactory;
+ (id)version30LineFactory;

- (id)arrayLineWithName:(id)arg1 value:(id)arg2;
- (id)arrayLineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
- (id)dataLineWithName:(id)arg1 value:(id)arg2;
- (id)lineWithLiteralValue:(id)arg1;
- (id)stringLineWithName:(id)arg1 value:(id)arg2;
- (id)versionPlaceholderLine;

@end
