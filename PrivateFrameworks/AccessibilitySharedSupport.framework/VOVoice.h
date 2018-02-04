/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

@interface VOVoice : NSManagedObject

@property (nonatomic, copy) NSString *ckRecordID;
@property (nonatomic, retain) NSData *ckRecordSystemFields;
@property (nonatomic, retain) VOSubstitution *substitution;
@property (nonatomic, copy) NSString *voiceID;

+ (id)fetchRequest;

@end
