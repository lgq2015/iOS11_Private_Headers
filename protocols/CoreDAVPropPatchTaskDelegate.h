/* made by EzioChiu.
 */

@protocol CoreDAVPropPatchTaskDelegate <CoreDAVTaskDelegate>

@optional

- (void)propPatchTask:(CoreDAVPropPatchTask *)arg1 parsedResponses:(NSArray *)arg2 error:(NSError *)arg3;

@end
