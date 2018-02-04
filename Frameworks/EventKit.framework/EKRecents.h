/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRecents : NSObject

+ (id)crAddressKindEmailString;
+ (id)crAddressKindPhoneNumberString;
+ (Class)crRecentContactsLibraryClass;
+ (id)crRecentsDomainCalendarString;
+ (struct NSObject { Class x1; }*)recentForContactWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3;
+ (bool)recordRecentForContactWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3;
+ (void)recordRecentWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3;

@end
