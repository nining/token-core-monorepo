#[allow(clippy::derive_partial_eq_without_eq)]
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct SignBlsToExecutionChangeParam {
    #[prost(string, tag = "1")]
    pub id: ::prost::alloc::string::String,
    #[prost(string, tag = "2")]
    pub password: ::prost::alloc::string::String,
    #[prost(string, tag = "3")]
    pub genesis_fork_version: ::prost::alloc::string::String,
    #[prost(string, tag = "4")]
    pub genesis_validators_root: ::prost::alloc::string::String,
    #[prost(uint32, repeated, tag = "5")]
    pub validator_index: ::prost::alloc::vec::Vec<u32>,
    #[prost(string, tag = "6")]
    pub from_bls_pub_key: ::prost::alloc::string::String,
    #[prost(string, tag = "7")]
    pub eth1_withdrawal_address: ::prost::alloc::string::String,
}
#[allow(clippy::derive_partial_eq_without_eq)]
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct SignBlsToExecutionChangeResult {
    #[prost(message, repeated, tag = "1")]
    pub signeds: ::prost::alloc::vec::Vec<SignedBlsToExecutionChange>,
}
#[allow(clippy::derive_partial_eq_without_eq)]
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct SignedBlsToExecutionChange {
    #[prost(message, optional, tag = "1")]
    pub message: ::core::option::Option<BlsToExecutionChangeMessage>,
    #[prost(string, tag = "2")]
    pub signature: ::prost::alloc::string::String,
}
#[allow(clippy::derive_partial_eq_without_eq)]
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct BlsToExecutionChangeMessage {
    #[prost(uint32, tag = "1")]
    pub validator_index: u32,
    #[prost(string, tag = "2")]
    pub from_bls_pubkey: ::prost::alloc::string::String,
    #[prost(string, tag = "3")]
    pub to_execution_address: ::prost::alloc::string::String,
}
