/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABBinders : NSObject {
    id /* block */  _blobBinder;
    id /* block */  _intBinder;
    id /* block */  _stringBinder;
}

@property id /* block */ blobBinder;
@property id /* block */ intBinder;
@property id /* block */ stringBinder;

- (id /* block */)blobBinder;
- (id /* block */)intBinder;
- (void)setBlobBinder:(id /* block */)arg1;
- (void)setIntBinder:(id /* block */)arg1;
- (void)setStringBinder:(id /* block */)arg1;
- (id /* block */)stringBinder;

@end
