/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLEmailAddressManager : NSObject {
    NSMutableDictionary * _emailsForKey;
    NSMutableDictionary * _keysForEmails;
    int  _maxKey;
    NSString * _plistPath;
}

+ (id)sharedManager;

- (void)_loadDictionariesIfNeeded;
- (void)dealloc;
- (id)emailAddressForKey:(id)arg1;
- (id)keyForEmailAddress:(id)arg1;

@end
