/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallSource : NSObject <CXProviderHostProtocol, CXProviderVendorProtocol> {
    BOOL  _connected;
    <CXCallSourceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSBundle *bundle;
@property (getter=isConnected, nonatomic) BOOL connected;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXCallSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isPermittedToUsePrivateAPI, nonatomic, readonly) BOOL permittedToUsePrivateAPI;
@property (getter=isPermittedToUsePublicAPI, nonatomic, readonly) BOOL permittedToUsePublicAPI;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CXProviderVendorProtocol> *vendorProtocolDelegate;

- (void).cxx_destruct;
- (oneway void)actionCompleted:(id)arg1;
- (void)beginWithCompletionHandler:(id /* block */)arg1;
- (id)bundle;
- (oneway void)commitTransaction:(id)arg1;
- (id)delegate;
- (id)description;
- (id)displayName;
- (oneway void)handleActionTimeout:(id)arg1;
- (oneway void)handleAudioSessionActivationStateChangedTo:(BOOL)arg1;
- (id)identifier;
- (id)init;
- (BOOL)isConnected;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isPermittedToUsePublicAPI;
- (int)processIdentifier;
- (id)queue;
- (oneway void)registerWithConfiguration:(id)arg1;
- (oneway void)reportAudioFinishedForCallWithUUID:(id)arg1;
- (oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(int)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(int)arg3;
- (oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(int)arg3 failureContext:(id)arg4;
- (oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
- (oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(id /* block */)arg3;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
- (oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
- (void)setConnected:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)vendorProtocolDelegate;

@end