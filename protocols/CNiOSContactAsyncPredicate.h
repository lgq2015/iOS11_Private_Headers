/* made by EzioChiu.
 */

@protocol CNiOSContactAsyncPredicate <CNiOSContactPredicate>

@required

- (<CNCancelable> *)cn_fetchPeopleInAddressBook:(void *)arg1 fetchRequest:(void *)arg2 progressiveResults:(void *)arg3 completion:(void *)arg4 environment:(void *)arg5; // needs 5 arg types, found 16: void*, CNiOSPersonFetchRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSDictionary *, void*, id /* block */, void*, void, id /* block */, NSError *, void*, CNContactsEnvironment *

@end
