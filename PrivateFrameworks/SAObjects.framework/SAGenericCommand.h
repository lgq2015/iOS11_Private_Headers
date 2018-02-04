/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGenericCommand : SABaseCommand

@property (nonatomic, readonly) NSString *className;
@property (nonatomic, readonly) NSString *group;

- (id)className;
- (id)encodedClassName;
- (id)group;
- (id)groupIdentifier;

@end
