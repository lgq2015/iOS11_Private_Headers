/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPhoneDialer : NSObject

+ (id)URLWithPhoneNumber:(id)arg1;
+ (bool)cancelDialMessage:(id)arg1 error:(id*)arg2;
+ (id)cancelMessageWithDialMessageID:(id)arg1;
+ (id)dialMessageWithDataValue:(id)arg1 displayName:(id)arg2;
+ (id)dialNumber:(id)arg1 displayName:(id)arg2 error:(id*)arg3;
+ (void)loadIdentityServices;
+ (id)messageWithAdditionalParameters:(id)arg1;
+ (id)sanitizePhoneNumber:(id)arg1;
+ (id)sendDialMessage:(id)arg1 displayName:(id)arg2 error:(id*)arg3;
+ (bool)sendMessage:(id)arg1 error:(id*)arg2;

@end
