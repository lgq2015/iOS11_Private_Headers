/* made by EzioChiu.
 */

@protocol HMApplicationData <NSObject>

@required

- (HMApplicationData *)applicationData;
- (void)updateApplicationData:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMApplicationData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
