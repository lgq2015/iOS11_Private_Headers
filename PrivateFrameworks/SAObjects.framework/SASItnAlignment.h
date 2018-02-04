/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASItnAlignment : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long firstPostItnCharPos;
@property (nonatomic) long long firstPreItnTokenIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastPostItnCharPos;
@property (nonatomic) long long lastPreItnTokenIndex;
@property (readonly) Class superclass;

+ (id)itnAlignment;
+ (id)itnAlignmentWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (long long)firstPostItnCharPos;
- (long long)firstPreItnTokenIndex;
- (id)groupIdentifier;
- (long long)lastPostItnCharPos;
- (long long)lastPreItnTokenIndex;
- (void)setFirstPostItnCharPos:(long long)arg1;
- (void)setFirstPreItnTokenIndex:(long long)arg1;
- (void)setLastPostItnCharPos:(long long)arg1;
- (void)setLastPreItnTokenIndex:(long long)arg1;

@end
