/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface _OSLogCollectionReference : NSObject {
    _OSLogDirectoryReference * _UUIDTextReference;
    _OSLogDirectoryReference * _diagnosticsDirectoryReference;
    _OSLogDirectoryReference * _timesyncReference;
}

@property (nonatomic, readonly) _OSLogDirectoryReference *UUIDTextReference;
@property (nonatomic, readonly) _OSLogDirectoryReference *diagnosticsDirectoryReference;
@property (nonatomic, readonly) _OSLogDirectoryReference *timesyncReference;

+ (id)localDBRef;
+ (id)referenceWithURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)UUIDTextReference;
- (void)close;
- (id)diagnosticsDirectoryReference;
- (id)initWithDiagnosticsDirectory:(id)arg1 timesyncDirectory:(id)arg2 UUIDTextDirectory:(id)arg3;
- (id)timesyncReference;

@end
