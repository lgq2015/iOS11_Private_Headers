/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCVersionsFileProvider : BRCFileProvider {
    NSMutableDictionary * _operationsByName;
}

- (void).cxx_destruct;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (id)_fileReactorID;
- (id)_physicalURLForURL:(id)arg1;
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dumpToContext:(id)arg1;
- (id)initWithVolume:(id)arg1;

@end
