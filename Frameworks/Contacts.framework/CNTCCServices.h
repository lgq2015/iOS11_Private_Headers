/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNTCCServices : NSObject

+ (id)defaultServices;

- (bool)TCCAccessCheckAuditToken:(struct { unsigned int x1[8]; })arg1 :(struct __CFString { }*)arg2 :(const struct __CFDictionary { }*)arg3;
- (int)TCCAccessPreflight:(struct __CFString { }*)arg1 :(const struct __CFDictionary { }*)arg2;

@end