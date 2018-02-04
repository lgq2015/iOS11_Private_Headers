/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMacFilesystemContext : SADomainObject

@property (nonatomic, copy) NSArray *targetEntities;

+ (id)filesystemContext;
+ (id)filesystemContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTargetEntities:(id)arg1;
- (id)targetEntities;

@end
